function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "my_brake_actuator"};
	this.sidHashMap["my_brake_actuator"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "my_brake_actuator:3"};
	this.sidHashMap["my_brake_actuator:3"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/In Bus Element"] = {sid: "my_brake_actuator:18"};
	this.sidHashMap["my_brake_actuator:18"] = {rtwname: "<Root>/In Bus Element"};
	this.rtwnameHashMap["<Root>/Runnable_Step_sys"] = {sid: "my_brake_actuator:3"};
	this.sidHashMap["my_brake_actuator:3"] = {rtwname: "<Root>/Runnable_Step_sys"};
	this.rtwnameHashMap["<Root>/Out Bus Element"] = {sid: "my_brake_actuator:19"};
	this.sidHashMap["my_brake_actuator:19"] = {rtwname: "<Root>/Out Bus Element"};
	this.rtwnameHashMap["<S1>/ThrCmd_Percent_Value_read"] = {sid: "my_brake_actuator:5"};
	this.sidHashMap["my_brake_actuator:5"] = {rtwname: "<S1>/ThrCmd_Percent_Value_read"};
	this.rtwnameHashMap["<S1>/Data Type Conversion"] = {sid: "my_brake_actuator:11"};
	this.sidHashMap["my_brake_actuator:11"] = {rtwname: "<S1>/Data Type Conversion"};
	this.rtwnameHashMap["<S1>/HBridgeDriver Lookup"] = {sid: "my_brake_actuator:12"};
	this.sidHashMap["my_brake_actuator:12"] = {rtwname: "<S1>/HBridgeDriver Lookup"};
	this.rtwnameHashMap["<S1>/ThrCmd_HwIO_Value_write"] = {sid: "my_brake_actuator:7"};
	this.sidHashMap["my_brake_actuator:7"] = {rtwname: "<S1>/ThrCmd_HwIO_Value_write"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
