var sm = require("..");
try{
    const val = "MEMORY1";
    let memoryAddress=sm.connectMemory(val);
    let message=sm.readStringFromMemory(memoryAddress);
    console.log(message);
}
catch(e){
    console.log("catch: " + e)
}

//console.log(sm);