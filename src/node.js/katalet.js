#! /usr/bin/env node
var args = process.argv;
var kataName = args[2];

if(! kataName ){
    console.log("Please enter a katalet name.");
    return 1;
}

console.log("The katalet you have selected is " + kataName);
return 0;
