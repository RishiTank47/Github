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

                        <div className=' mt-1 product_2 '>
                        <img src={res.image} alt="" />
                        </div>    

                        <div className='ms-3'>
                        <span className=' ' >{res.title}</span> 
                        <p className=''>{res.title_1}</p> 
                        </div>

                        </div>
                       
                    )
                })
            }
        </div>

      
        </>
    );
}

export default Nav_Product;