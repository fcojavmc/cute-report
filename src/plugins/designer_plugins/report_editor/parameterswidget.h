/***************************************************************************
 *   This file is part of the CuteReport project                           *
 *   Copyright (C) 2012-2017 by Alexander Mikhalov                         *
 *   alexander.mikhalov@gmail.com                                          *
 *                                                                         *
 **                   GNU General Public License Usage                    **
 *                                                                         *
 *   This library is free software: you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation, either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>. *
 *                                                                         *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 ***************************************************************************/

#ifndef PARAMETERSWIDGET_H
#define PARAMETERSWIDGET_H

#include <QWidget>
#include <QVariant>

class ParametersModel;
class QStandardItemModel;
class QStandardItem;

namespace Ui {
class ParametersWidget;
}

namespace CuteReport {
class ReportInterface;
}

class ParametersWidget : public QWidget
{
    Q_OBJECT

public:
    //enum VarType {StringType, BoolType, IntType, DoubleType, DateType, TimeType, DatetimeType, PixmapType};
    explicit ParametersWidget(QWidget *parent = 0);
    ~ParametersWidget();

    void setReport(CuteReport::ReportInterface * report);

private slots:
//    void variableItemChanged(QStandardItem *item);
    void slotModelVariableChanged(const QString & variableName, const QVariant & variableValue);
    void updateView();

private:
    Ui::ParametersWidget *ui;

    ParametersModel * m_variablesModel;
    CuteReport::ReportInterface * m_report;
};

#endif // PARAMETERSWIDGET_H
