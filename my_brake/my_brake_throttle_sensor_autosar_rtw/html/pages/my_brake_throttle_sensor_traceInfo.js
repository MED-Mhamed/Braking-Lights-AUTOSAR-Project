function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "my_brake_throttle_sensor"};
	this.sidHashMap["my_brake_throttle_sensor"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "my_brake_throttle_sensor:3"};
	this.sidHashMap["my_brake_throttle_sensor:3"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/In Bus Element"] = {sid: "my_brake_throttle_sensor:19"};
	this.sidHashMap["my_brake_throttle_sensor:19"] = {rtwname: "<Root>/In Bus Element"};
	this.rtwnameHashMap["<Root>/Runnable_Step_sys"] = {sid: "my_brake_throttle_sensor:3"};
	this.sidHashMap["my_brake_throttle_sensor:3"] = {rtwname: "<Root>/Runnable_Step_sys"};
	this.rtwnameHashMap["<Root>/Out Bus Element"] = {sid: "my_brake_throttle_sensor:20"};
	this.sidHashMap["my_brake_throttle_sensor:20"] = {rtwname: "<Root>/Out Bus Element"};
	this.rtwnameHashMap["<S1>/TPS_HwIO_Value_read"] = {sid: "my_brake_throttle_sensor:5"};
	this.sidHashMap["my_brake_throttle_sensor:5"] = {rtwname: "<S1>/TPS_HwIO_Value_read"};
	this.rtwnameHashMap["<S1>/Data Type Conversion"] = {sid: "my_brake_throttle_sensor:11"};
	this.sidHashMap["my_brake_throttle_sensor:11"] = {rtwname: "<S1>/Data Type Conversion"};
	this.rtwnameHashMap["<S1>/TPS Lookup"] = {sid: "my_brake_throttle_sensor:12"};
	this.sidHashMap["my_brake_throttle_sensor:12"] = {rtwname: "<S1>/TPS Lookup"};
	this.rtwnameHashMap["<S1>/TPS_Percent_Value_write"] = {sid: "my_brake_throttle_sensor:7"};
	this.sidHashMap["my_brake_throttle_sensor:7"] = {rtwname: "<S1>/TPS_Percent_Value_write"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
