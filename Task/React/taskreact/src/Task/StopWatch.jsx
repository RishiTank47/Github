import React, { useEffect, useState } from 'react';

function StopWatch(props) {

    const[counter,setCounter]=useState(0)

    // var counter=0;

    useEffect (()=>{
        
    })
   const start=()=>{


        let timer;
       
        for (let counter = counter; counter =Infinity; counter++) 
       {
        setInterval(() => {

            setCounter((prevcounter)=>prevcounter+1);
             
        }, 1000);
    
       }
     
    } 

    return (
        <div>
                <h1>{counter}</h1>
                <button className='btn btn-primary' onClick={start}>Start</button>
            
        </div>
    );
}

export default StopWatch;