#pragma once

#include <QTabWidget>
#include <QWidget>

class QTabWidgetEx : public QTabWidget {
        Q_OBJECT

    public:
        QTabWidgetEx(QWidget* parent = nullptr);

    private slots:
        void onTabMoved(int from, int to);

    signals:
        void tabMoved(int from, int to);

};
