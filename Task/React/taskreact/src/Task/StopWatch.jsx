import React, { useEffect, useState } from 'react';

function StopWatch(props) {

    const[counter,setCounter]=useState(0)

   function Watch() {

    for ( counter = 0; counter < 5; counter++) 
    {
        //  console.log(i+"tops Tech");    

        setTimeout(() => {
            
        }, 1000);
            
    }
    
   }


    return (
        <div>
                <h1>{counter}</h1>
                <button className='btn btn-primary' onClick={Watch}>Start</button>
            
        </div>
    );
}

export default StopWatch;