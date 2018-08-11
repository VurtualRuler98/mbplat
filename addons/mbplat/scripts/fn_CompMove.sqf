/*
Copyright 2018 vurtual

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

*/

//Move composition.

// _plat		Platform base object.
_plat = param [0,objNull,[objNull]];
if (!isServer) exitWith {};
if (isNull _plat) exitWith {["No platform object provided!"] call bis_fnc_error; false};
_platParts = _plat getVariable ["mbplat_parts", []];
_dir = getdir _plat;
[_plat,0,0] call BIS_fnc_setPitchBank;

{
	_part = _x select 0;
	_ang = _x select 2;
	_path = _x select 3;
	_part setDir _dir+_ang;
	[_part,0,0] call BIS_fnc_setPitchBank;
	_pos = _plat modelToWorldWorld (_plat selectionPosition (_x select 1));
	_part setPosASL _pos;
	if (!isNull _path) then {
		_path setDir _dir+_ang;
		[_path,0,0] call BIS_fnc_setPitchBank;
		_path setPosATL [_pos select 0,_pos select 1,_x select 4];
	};

} forEach _platParts;
true
