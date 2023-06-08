import React, { useEffect, useState } from 'react';

function DataInTable(props) { 

    const [status,setState]=useState ('Pending.....')
    const[data,setdata]=useState('')
    

    useEffect(()=>{
        setTimeout(() => {
            fetch('https://jsonplaceholder.typicode.com/todos')
            .then((res)=>res.json())
            .then((Response)=>{  
            
                var HTMLDATA=''
                Response.map(ele => { 
                    console.log(ele.id);
                    HTMLDATA+=`<tr>
                        <td>${ele.userId}</td>
                        <td>${ele.id}</td>
                        <td>${ele.title}</td>
                        <td>${ele.completed}</td>
                            </tr>`
                            document.querySelector('#dispData').innerHTML=HTMLDATA;  

                            setState('Success') 
                            setdata(Response);
                });
            
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
                    <table className='table table-bordered'> 
                        <thead>
                            <tr>
                                <th>userId</th>
                                <th>id</th>
                                <th>title</th>
                                <th>completed</th>
                            </tr>
                        </thead> 
                    <tbody id="dispData">
                    
                    </tbody>
                    </table>
                    
                  </div>
                </div>
            </div>
        </div>
        </>
    );
}

export default DataInTable;