/****************************************************************************
**
** Copyright (C) 2008 Nokia Corporation and/or its subsidiary(-ies).
** Contact: Qt Software Information (qt-info@nokia.com)
**
** This file is part of the documentation of the Qt Toolkit.
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

#include <QtGui>

#include "mainwindow.h"
#include "model.h"

MainWindow::MainWindow()
{
    QMenu *fileMenu = new QMenu(tr("&File"));

    QAction *quitAction = fileMenu->addAction(tr("E&xit"));
    quitAction->setShortcut(tr("Ctrl+Q"));

    QMenu *itemsMenu = new QMenu(tr("&Items"));

    insertAction = itemsMenu->addAction(tr("&Insert Item"));
    removeAction = itemsMenu->addAction(tr("&Remove Item"));
    QAction *ascendingAction = itemsMenu->addAction(tr("Sort in &Ascending Order"));
    QAction *descendingAction = itemsMenu->addAction(tr("Sort in &Descending Order"));

    menuBar()->addMenu(fileMenu);
    menuBar()->addMenu(itemsMenu);

    QStringList strings;
    strings << tr("Oak") << tr("Fir") << tr("Pine") << tr("Birch")
            << tr("Hazel") << tr("Redwood") << tr("Sycamore") << tr("Chestnut");
    model = new StringListModel(strings, this);
/*  For convenient quoting:
    QListView *listView = new QListView(this);
*/
    listView = new QListView(this);
    listView->setModel(model);
    listView->setSelectionMode(QAbstractItemView::SingleSelection);

    connect(quitAction, SIGNAL(triggered()), this, SLOT(close()));
    connect(ascendingAction, SIGNAL(triggered()), this, SLOT(sortAscending()));
    connect(descendingAction, SIGNAL(triggered()), this, SLOT(sortDescending()));
    connect(insertAction, SIGNAL(triggered()), this, SLOT(insertItem()));
    connect(removeAction, SIGNAL(triggered()), this, SLOT(removeItem()));
    connect(listView->selectionModel(),
            SIGNAL(currentChanged(const QModelIndex &, const QModelIndex &)),
            this, SLOT(updateMenus(const QModelIndex &)));

    updateMenus(listView->selectionModel()->currentIndex());

    setCentralWidget(listView);
    setWindowTitle(tr("List View"));
}

void MainWindow::sortAscending()
{
    model->sort(0, Qt::AscendingOrder);
}

void MainWindow::sortDescending()
{
    model->sort(0, Qt::DescendingOrder);
}

void MainWindow::insertItem()
{
    QModelIndex currentIndex = listView->currentIndex();
    if (!currentIndex.isValid())
        return;

    QString itemText = QInputDialog::getText(this, tr("Insert Item"),
        tr("Input text for the new item:"));

    if (itemText.isNull())
        return;

    if (model->insertRow(currentIndex.row(), QModelIndex())) {
        QModelIndex newIndex = model->index(currentIndex.row(), 0, QModelIndex());
        model->setData(newIndex, itemText, Qt::EditRole);

        QString toolTipText = tr("Tooltip:") + itemText;
        QString statusTipText = tr("Status tip:") + itemText;
        QString whatsThisText = tr("What's This?:") + itemText;
        model->setData(newIndex, toolTipText, Qt::ToolTipRole);
        model->setData(newIndex, toolTipText, Qt::StatusTipRole);
        model->setData(newIndex, whatsThisText, Qt::WhatsThisRole);
    }
}

void MainWindow::removeItem()
{
    QModelIndex currentIndex = listView->currentIndex();
    if (!currentIndex.isValid())
        return;

    model->removeRow(currentIndex.row(), QModelIndex());
}

void MainWindow::updateMenus(const QModelIndex &current)
{
    insertAction->setEnabled(current.isValid());
    removeAction->setEnabled(current.isValid());
}