var sm = require("..");
try{
    const val = "TEST1";
    let memoryAddress=sm.createMemory(val);
    console.log("Inside example:"+memoryAddress)
    sm.writeStringToMemory(memoryAddress,"Hello there. I am shaiful");
    //console.log(memory1);
    console.log("press key to end");
    sm.getch();
}
catch(e){
    console.log("catch: " + e)
}

//console.log(sm);