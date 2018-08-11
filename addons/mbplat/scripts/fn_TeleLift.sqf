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
//Magic lift teleport.

// _lift		Lift object.
//_dist			Height from top to bottom of lift object.
_lift = param [0,objNull,[objNull]];
_dist = param [1,0,[1]];
if (isNull _lift) exitWith {["Lift object is null!"] call bis_fnc_error; false};
_objects = nearestObjects[_lift,["AllVehicles"],20];
_updog = [];
_downdog = [];
_top = (getPosASL _lift select 2)+3;
_up = (getPosASL _lift select 2)-3;
_down = (getPosASL _lift select 2)+3-_dist;
_bottom = (getPosASL _lift select 2)-3-_dist;
{	_height=(getPosASL _x select 2); if (_height>_up && _height<_top) then {_downdog pushBack _x};
	if (_height<_down && _height>_bottom) then {_updog pushBack _x}; } forEach _objects;
{_x setPosASL [getPosASL _x select 0, getPosASL _x select 1, (getPosASL _x select 2)+_dist]} forEach _updog;
{_x setPosASL [getPosASL _x select 0, getPosASL _x select 1, (getPosASL _x select 2)-_dist]} forEach _downdog;
true
