import React, { useState } from 'react';
import Nav_Product from './Nav_Product';

function Navbar(props) {
  
   
 
    return (
        <>
      <nav className="navbar navbar-expand-sm navbar-light bg-white">

      <a className="navbar-brand" href="javascript:void(0)">
             <img src="img/Dropbox.png" alt="" />
          </a>
          <a className='drop_icon' href="" >Dropbox </a>

        <div className="container-fluid">

          <button className="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#mynavbar">
             <span className="navbar-toggler-icon"> </span>
          </button>

            <div className="collapse navbar-collapse navbar_ul " id="mynavbar">

              <ul className="navbar-nav me-auto">

                <li className="nav-item p-2 why_dropebox_0">
                  <a className="nav-link" href="javascript:void(0)">Why Dropbox?</a>

                  <div className="container why_dropebox ">
                     <ul className="navbar-nav me-auto mt-1 ">

                      <li className="nav-item ms-2 h6 " > 
                        Overview
                      </li>

                      <li className="nav-item " > 
                        <a className="nav-link" href="">Get inspired</a>
                      </li>

                      <li className="nav-item " > 
                        <a className="nav-link" href="">What customers say </a>
                      </li>

                      <li className="nav-item " > 
                        <a className="nav-link" href="">App intergration </a>
                      </li>

                      <li className="nav-item " > 
                        <a className="nav-link" href="">Resources</a>
                      </li>

                    </ul> 
                     <ul className="navbar-nav me-auto mt-1 ">

                      <li className="nav-item ms-2 h6 " > 
                        Better with Dropebox
                      </li>

                      <li className="nav-item " > 
                        <a className="nav-link" href="">Share files</a>
                      </li>

                      <li className="nav-item " > 
                        <a className="nav-link" href="">Store and organize</a>
                      </li>

                      <li className="nav-item " > 
                        <a className="nav-link" href="">Synce your devices</a>
                      </li>

                      <li className="nav-item " > 
                        <a className="nav-link" href="">Protect and secure data</a>
                      </li>

                      <li className="nav-item " > 
                        <a className="nav-link" href="">Connect remote teams</a>
                      </li>

                      <li className="nav-item " > 
                        <a className="nav-link" href="">Keep work moving</a>
                      </li>

                      <li className="nav-item " > 
                        <a className="nav-link" href="">Always-on backup</a>
                      </li>

                      <li className="nav-item " > 
                        <a className="nav-link" href="">Sign a document</a>
                      </li>

                      <li className="nav-item " > 
                        <a className="nav-link" href="">Track document analytics</a>
                      </li>

                    </ul>

                    
                  </div>
                </li>

                <li className="nav-item p-2 product ">
                  <a className="nav-link" href="javascript:void(0)">Product</a>

                  <div className="container product_1 ">
                   <p className='h6 ms-1'>Do more than store with Dropbox</p> 


                    {/* <div className="container d-flex">
                      <div>abubi</div>
                      <div>skndn</div> 
                    </div> */}
                    
                     {/* {<div className="row ">
                      {API.map((res)=>{
                        return(
                          <div className="d-flex"> 
                          <div className="col-4">
                              <img src={res.image} alt="" />   
                          </div>
                          <div className="col-8">
                              
                          </div>
                          </div>    
                        )
                      })}
                    </div>  }  */} 

                      <Nav_Product/>


                  </div>
                </li>

                <li className="nav-item p-2">
                  <a className="nav-link" href="javascript:void(0)">Solution</a>
                </li>

                <li className="nav-item p-2">
                  <a className="nav-link" href="javascript:void(0)">Pricing</a>
                </li>

              </ul>

              <form className="d-flex">
                <ul className="navbar-nav me-auto">

                <li className="nav-item ">
                  <a className="nav-link" href="javascript:void(0)">Contact</a>
                </li>

                <li className="nav-item ">
                  <a className="nav-link" href="javascript:void(0)">Get app</a>
                </li>

                <li className="nav-item ">
                  <a className="nav-link" href="javascript:void(0)">Sign up</a>
                </li>

                <li className="nav-item ">
                  <a className="nav-link" href="javascript:void(0)">Login</a>
                </li>
                </ul>

                <button className="btn btn-primary pe-5" type="button">Get started <i class="fa-thin fa-arrow-right"></i> </button>
              </form>
              
            </div>
          </div>
</nav>

  <div className="class">

  </div>



        </>
    );
}



export default Navbar;