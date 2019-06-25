#ifndef TEST_HELPERS_H
#define TEST_HELPERS_H

#include <QtTest>

class Test_Helpers : public QObject {
    Q_OBJECT

    private slots:
        void encodeTitle_colon();
        void encodeTitle_allPrintable();
        void decodeTitle_allPrintable();
        void encodeTitle_tab();
        void decodeTitle_tab();
        void encodeTitle_dotInMiddle();
        void decodeTitle_dotInMiddle();
        void encodeTitle_dotAtEnd();
        void decodeTitle_dotAtEnd();
        void decodeTitle_accidentalDotAtEnd();
        void encodeTitle_doubleDotAtEnd();
        void decodeTitle_doubleDotAtEnd();
        void decodeTitle_accidentalDoubleDotAtEnd();
        void decodeTitle_accidental1();
        void decodeTitle_accidental2();
        void decodeTitle_accidental3();
        void decodeTitle_accidental4();
        void decodeTitle_accidental5();

};

#endif // TEST_HELPERS_H