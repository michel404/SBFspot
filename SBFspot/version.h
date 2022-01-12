#define VERSION "3.9.2"

/*
V3.8.4
    Fix 384/137/381/313/... Bad request 400: Power value too high for system size
    Improved event decoding
    Cleanup verbose/debug messages

V3.9.0
    Fix #3 Three string SMA inverters
    Fix #401 Multiple strings support
    Fix #421 SMA core2 has 12 strings
    Removed Web Solar Log (WSL) support
    Fix #496 WakeUp/Sleep time in MQTT
    Fix #419 SMA Energymeter & SMA Inverter: report current MeteringGridMsTotW*
    Fix #420/#440 (manually merged) Add inverter power measurements from a connected energy meter

V3.9.1
    Fix #508: V390: no contents written into the csv file: 'spot'
    Removed PAC_MAX
    C++11 range-based for-loops
    Removed -ble option
    Show MeteringGridInfo only when available

V3.9.2
    Fix #511 Segmentation fault on V3.9.1

*/

/***
*
* Complete modification history can be found at:
* https://github.com/SBFspot/SBFspot/wiki/Modification-History
*
***/