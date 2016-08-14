/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#include "titanic/game/transport/service_elevator.h"

namespace Titanic {

int CServiceElevator::_v1;
int CServiceElevator::_v2;
int CServiceElevator::_v3;

CServiceElevator::CServiceElevator() : CTransport(),
	_fieldF8(0), _fieldFC(0), _field100(0), _field104(0) {
}

void CServiceElevator::save(SimpleFile *file, int indent) {
	file->writeNumberLine(1, indent);
	file->writeNumberLine(_v1, indent);
	file->writeNumberLine(_v2, indent);
	file->writeNumberLine(_v3, indent);
	file->writeNumberLine(_fieldF8, indent);
	file->writeNumberLine(_fieldFC, indent);
	file->writeNumberLine(_field100, indent);
	file->writeNumberLine(_field104, indent);

	CTransport::save(file, indent);
}

void CServiceElevator::load(SimpleFile *file) {
	file->readNumber();
	_v1 = file->readNumber();
	_v2 = file->readNumber();
	_v3 = file->readNumber();
	_fieldF8 = file->readNumber();
	_fieldFC = file->readNumber();
	_field100 = file->readNumber();
	_field104 = file->readNumber();

	CTransport::load(file);
}

} // End of namespace Titanic