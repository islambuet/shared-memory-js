var sm = require("..");
try{
    const val = "TEST1";
    let memoryAddress=sm.createMemory(val);    
    sm.writeStringToMemory(memoryAddress,"Hello there. I am shaiful.Writing from js");    
    console.log("press key to end");
    sm.getch();
}
catch(e){
    console.log("catch: " + e)
}

//console.log(sm);