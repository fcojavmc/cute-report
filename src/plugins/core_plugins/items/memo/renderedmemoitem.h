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
 **                  GNU Lesser General Public License                    **
 *                                                                         *
 *   This library is free software: you can redistribute it and/or modify  *
 *   it under the terms of the GNU Lesser General Public License as        *
 *   published by the Free Software Foundation, either version 3 of the    *
 *   License, or (at your option) any later version.                       *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this library.                                      *
 *   If not, see <http://www.gnu.org/licenses/>.                           *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 ***************************************************************************/

#ifndef RENDEREDMEMOITEM_H
#define RENDEREDMEMOITEM_H

#include "renderediteminterface.h"
#include "plugins_common.h"

SUIT_BEGIN_NAMESPACE

class  MemoItemPrivate;

class  RenderedMemoItem : public CuteReport::RenderedItemInterface
{
public:
    explicit RenderedMemoItem(CuteReport::BaseItemInterface * item, CuteReport::BaseItemInterfacePrivate *itemPrivateData);
    ~RenderedMemoItem();

    void setText(const QString & text);

    virtual void paint(QPainter * painter, const QStyleOptionGraphicsItem *option, QWidget *widget = 0);
    virtual void redraw(bool withChildren = true);

    virtual bool setEditMode(QWidget * topWidget);

private:
    friend class MemoItem;
    friend class MemoHelper;
};

SUIT_END_NAMESPACE

#endif // RENDEREDMEMOITEM_H
