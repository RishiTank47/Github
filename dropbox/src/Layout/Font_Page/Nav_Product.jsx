import React, { useState } from 'react';
import Nav_productAPI from '../API/Nav_productAPI'

function Nav_Product(props) {
    const [API,setAPI]=useState(Nav_productAPI)
    console.log(API);
    return (
        <>
        <div className="row">
            {
                API.map((res)=>{
                    console.log(res); 
                    return(
                        <div className=" d-flex " > 
                        
                        <img src={res.image} alt="" />
                                 
                        </div> 
                    )
                })
            }
        </div>

      
        </>
    );
}

export default Nav_Product;