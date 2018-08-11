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
if ((isNull _plat) || !(local _plat)) exitWith {false};

_platParts = _plat getVariable ["mbplat_parts", []];

{
	_part = _x select 0;
	_path = _x select 3;
	deleteVehicle _part;
	if (!isNull _path) then {
		deleteVehicle _path;
	};

} forEach _platParts;
deleteVehicle _plat;
true
