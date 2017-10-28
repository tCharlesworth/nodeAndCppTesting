const { GetVolumeSessions } = require("./build/Release/addon");

console.log("Running test");
let result = GetVolumeSessions();
console.log("END");