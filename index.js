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
                return shared_memory.createMemory(key);                
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
                return shared_memory.connectMemory(key);                
            }catch(e){                
                throw e;
            }
        }
        else{
            throw 'memory key is not string'
        }       
    },
    writeStringToMemory(memoryAddress,message){
        try{
            let status = shared_memory.writeStringToMemory(memoryAddress,message);
            return status;
            //return shared_memory.writeStringToMemory(memoryAddress,message);//TODO single line does not work for strange reason
        }catch(e){                
            throw e;
        }
    },
    readStringFromMemory(memoryAddress){
        try{                
            return shared_memory.readStringFromMemory(memoryAddress);               
        }catch(e){                
            throw e;
        }
    },
    writeArray01ToMemory(memoryAddress,array_01){
        try{
            return shared_memory.writeArray01ToMemory(memoryAddress,array_01);
        }catch(e){                
            throw e;
        }
    },
    readArray02FromMemory(memoryAddress){
        try{                
            return shared_memory.readArray02FromMemory(memoryAddress);               
        }catch(e){                
            throw e;
        }
    },
}