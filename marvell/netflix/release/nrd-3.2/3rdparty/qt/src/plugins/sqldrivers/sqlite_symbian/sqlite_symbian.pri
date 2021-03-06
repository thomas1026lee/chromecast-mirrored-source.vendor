# We just want to include the sqlite3 binaries for Symbian for platforms that do not have them.
!symbian-abld:!symbian-sbsv2 {
    !symbian_no_export_sqlite:!exists($${EPOCROOT}epoc32/release/armv5/lib/sqlite3.dso) {
        symbian_sqlite3_zip_file = $$PWD/SQLite3_v9.2.zip

        # The QMAKE_COPY section is to update timestamp on the file.
        symbian_sqlite3_header.input = symbian_sqlite3_zip_file
        symbian_sqlite3_header.output = sqlite3.h
        !isEmpty(MOC_DIR):symbian_sqlite3_header.output = $$MOC_DIR/$$symbian_sqlite3_header.output
        symbian_sqlite3_header.CONFIG = combine no_link
        symbian_sqlite3_header.dependency_type = TYPE_C
        symbian_sqlite3_header.commands = $$QMAKE_UNZIP -j ${QMAKE_FILE_NAME} epoc32/include/stdapis/${QMAKE_FILE_OUT_BASE}.h \
                                          && $$QMAKE_COPY ${QMAKE_FILE_OUT_BASE}.h ${QMAKE_FILE_OUT}.tmp \
                                          && $$QMAKE_DEL_FILE ${QMAKE_FILE_OUT_BASE}.h \
                                          && $$QMAKE_MOVE ${QMAKE_FILE_OUT}.tmp ${QMAKE_FILE_OUT}
        QMAKE_EXTRA_COMPILERS += symbian_sqlite3_header

        # The QMAKE_COPY section is to update timestamp on the file.
        symbian_sqlite3_dso.input = symbian_sqlite3_zip_file
        symbian_sqlite3_dso.output = sqlite3.dso
        !isEmpty(OBJECTS_DIR):symbian_sqlite3_dso.output = $$OBJECTS_DIR/$$symbian_sqlite3_dso.output
        symbian_sqlite3_dso.CONFIG = combine no_link target_predeps
        symbian_sqlite3_dso.commands = $$QMAKE_UNZIP -j ${QMAKE_FILE_NAME} epoc32/release/armv5/lib/${QMAKE_FILE_OUT_BASE}.dso \
                                       && $$QMAKE_COPY ${QMAKE_FILE_OUT_BASE}.dso ${QMAKE_FILE_OUT}.tmp \
                                       && $$QMAKE_DEL_FILE ${QMAKE_FILE_OUT_BASE}.dso \
                                       && $$QMAKE_MOVE ${QMAKE_FILE_OUT}.tmp ${QMAKE_FILE_OUT}
        QMAKE_EXTRA_COMPILERS += symbian_sqlite3_dso

        symbian_sqlite3_ver_dso.input = symbian_sqlite3_zip_file
        symbian_sqlite3_ver_dso.output = sqlite3{00060003}.dso
        !isEmpty(OBJECTS_DIR):symbian_sqlite3_ver_dso.output = $$OBJECTS_DIR/$$symbian_sqlite3_ver_dso.output
        symbian_sqlite3_ver_dso.CONFIG = $$symbian_sqlite3_dso.CONFIG
        symbian_sqlite3_ver_dso.commands = $$symbian_sqlite3_dso.commands
        QMAKE_EXTRA_COMPILERS += symbian_sqlite3_ver_dso

        QMAKE_LIBDIR *= $$OBJECTS_DIR
    }
}
