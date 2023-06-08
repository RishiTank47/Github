import { resolveTo } from '@remix-run/router';
import React, { useEffect, useState } from 'react';

function API(props) {

    const [status,setState]=useState('Pending.....')
    const[data,setdata]=useState('')
    useEffect(()=>{
        setTimeout(()=>{
            fetch ('https://jsonplaceholder.typicode.com/todos') 
            .then((res)=>res.json())
            .then((response)=>{
                console.log(response);
                setState('Success') 
                setdata(response);
            })
        }, 3000); 
    })
    return (
        <>
        
        <div>
            <div className="container">
                <div className="row">
                    <div className="col">
                        <h1>{status}</h1> 
                        <div>{status=='Success'?JSON.stringify(data):'NO Data Found'}</div>
                    </div>
                </div>
            </div>
        </div>
        </>
    );
}

export default API;