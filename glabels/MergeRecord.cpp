/*  MergeRecord.cpp
 *
 *  Copyright (C) 2013  Jim Evins <evins@snaught.com>
 *
 *  This file is part of gLabels-qt.
 *
 *  gLabels-qt is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  gLabels-qt is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with gLabels-qt.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "MergeRecord.h"


///
/// Constructor
///
MergeRecord::MergeRecord() : mSelected( false )
{
}


///
/// Constructor
///
MergeRecord::MergeRecord( const MergeRecord* record )
	: mSelected(record->mSelected), mFieldList(record->mFieldList)
{
}


///
/// Clone
///
MergeRecord* MergeRecord::clone() const
{
	return new MergeRecord( this );
}


///
/// Is record selected?
///
bool MergeRecord::isSelected() const
{
	return mSelected;
}


///
/// Set selected on not selected
///
void MergeRecord::setSelected( bool value )
{
	mSelected = value;
}


///
/// Is record empty?
///
bool MergeRecord::isEmpty() const
{
	return mFieldList.size() == 0;
}


///
/// Get field list
///
const QList<MergeField>& MergeRecord::fieldList() const
{
	return mFieldList;
}


///
/// Set field list
///
void MergeRecord::setFieldList( QList<MergeField>& value )
{
	mFieldList = value;
}
