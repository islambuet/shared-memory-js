const shared_memory = require('./build/Release/shared_memory');
module.exports ={
    getch(){        
        shared_memory.getch();        
    },
    createMemory(key){
        if(typeof key === 'string'){
            if(key.length>128){
                throw "Too long key."                
            }
            try{                
                let memoryAddress=shared_memory.createMemory(key);
                return memoryAddress;
            }catch(e){                
                throw e;
            }
        }
        else{
            throw 'memory key is not string'
        }       
    },
    connectMemory(key){
        if(typeof key === 'string'){
            if(key.length>128){
                throw "Too long key."                
            }
            try{                
                let memoryAddress=shared_memory.connectMemory(key);
                return memoryAddress;
            }catch(e){                
                throw e;
            }
        }
        else{
            throw 'memory key is not string'
        }       
    },
    writeStringToMemory(memoryAddress,message){
        shared_memory.writeStringToMemory(memoryAddress,message);
    },
    readStringFromMemory(memoryAddress){
        let  message = shared_memory.readStringFromMemory(memoryAddress);
        return message;        
    }
}