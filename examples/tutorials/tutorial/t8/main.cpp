/****************************************************************************
**
** Copyright (C) 2008 Nokia Corporation and/or its subsidiary(-ies).
** Contact: Qt Software Information (qt-info@nokia.com)
**
** This file is part of the example classes of the Qt Toolkit.
**
** Commercial Usage
** Licensees holding valid Qt Commercial licenses may use this file in
** accordance with the Qt Commercial License Agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Nokia.
**
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License versions 2.0 or 3.0 as published by the Free
** Software Foundation and appearing in the file LICENSE.GPL included in
** the packaging of this file.  Please review the following information
** to ensure GNU General Public Licensing requirements will be met:
** http://www.fsf.org/licensing/licenses/info/GPLv2.html and
** http://www.gnu.org/copyleft/gpl.html.  In addition, as a special
** exception, Nokia gives you certain additional rights. These rights
** are described in the Nokia Qt GPL Exception version 1.3, included in
** the file GPL_EXCEPTION.txt in this package.
**
** Qt for Windows(R) Licensees
** As a special exception, Nokia, as the sole copyright holder for Qt
** Designer, grants users of the Qt/Eclipse Integration plug-in the
** right for the Qt/Eclipse Integration to link to functionality
** provided by Qt Designer and its related libraries.
**
** If you are unsure which license is appropriate for your use, please
** contact the sales department at qt-sales@nokia.com.
**
****************************************************************************/

#include <QApplication>
#include <QFont>
#include <QGridLayout>
#include <QPushButton>

//! [0]
#include "cannonfield.h"
//! [0]
#include "lcdrange.h"

//! [1]
class MyWidget : public QWidget
{
public:
    MyWidget(QWidget *parent = 0);
};
//! [1]

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton *quit = new QPushButton(tr("Quit"));
    quit->setFont(QFont("Times", 18, QFont::Bold));

    connect(quit, SIGNAL(clicked()), qApp, SLOT(quit()));

//! [2]
    LCDRange *angle = new LCDRange;
//! [2] //! [3]
    angle->setRange(5, 70);
//! [3]

//! [4]
    CannonField *cannonField = new CannonField;
//! [4]

//! [5]
    connect(angle, SIGNAL(valueChanged(int)),
            cannonField, SLOT(setAngle(int)));
//! [5] //! [6]
    connect(cannonField, SIGNAL(angleChanged(int)),
            angle, SLOT(setValue(int)));
//! [6]

//! [7]
    QGridLayout *gridLayout = new QGridLayout;
//! [7] //! [8]
    gridLayout->addWidget(quit, 0, 0);
//! [8] //! [9]
    gridLayout->addWidget(angle, 1, 0);
//! [9] //! [10]
    gridLayout->addWidget(cannonField, 1, 1, 2, 1);
//! [10] //! [11]
    gridLayout->setColumnStretch(1, 10);
//! [11]
    setLayout(gridLayout);

//! [12]
    angle->setValue(60);
//! [12] //! [13]
    angle->setFocus();
//! [13]
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MyWidget widget;
    widget.setGeometry(100, 100, 500, 355);
    widget.show();
    return app.exec();
}