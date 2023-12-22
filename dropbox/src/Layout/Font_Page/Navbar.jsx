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

                      <Nav_Product/>

                  </div>
                </li>

                <li className="nav-item p-2 solution">
                  <a className="nav-link" href="javascript:void(0)">Solution</a>

                  <div className="container solution_1"> 
                     <ul className="navbar-nav me-auto mt-1 ">

                      <li className="nav-item ms-2 h6 " > 
                        Roles
                      </li>

                      <li className="nav-item " > 
                        <a className="nav-link" href="">Creatives</a>
                      </li>

                      <li className="nav-item " > 
                        <a className="nav-link" href="">Sales </a>
                      </li>

                      <li className="nav-item " > 
                        <a className="nav-link" href="">Marketing</a>
                      </li>

                      <li className="nav-item " > 
                        <a className="nav-link" href="">HR</a>
                      </li>

                      <li className="nav-item " > 
                        <a className="nav-link" href="">IT</a>
                      </li>

                      <li className="nav-item " > 
                        <a className="nav-link" href="">Team Lead</a>
                      </li>

                      <li className="nav-item " > 
                        <a className="nav-link" href="">Personal</a>
                      </li>

                    </ul> 
                     <ul className="navbar-nav me-auto mt-1 ">

                      <li className="nav-item ms-2 h6 " > 
                        Idustries
                      </li>

                      <li className="nav-item " > 
                        <a className="nav-link" href="">Construction</a>
                      </li>

                      <li className="nav-item " > 
                        <a className="nav-link" href="">Technology</a>
                      </li>

                      <li className="nav-item " > 
                        <a className="nav-link" href="">Manufacturing</a>
                      </li>

                      <li className="nav-item " > 
                        <a className="nav-link" href="">Media</a>
                      </li>

                      <li className="nav-item " > 
                        <a className="nav-link" href="">Professional Services</a>
                      </li>

                    </ul>

                    
                  </div>

                </li>

                <li className="nav-item p-2">
                  <a className="nav-link" href="javascript:void(0)">Pricing</a>
                </li>

              </ul>

              <form className="d-flex ">
                <ul className="navbar-nav me-auto ">

                <li className="nav-item contact p-1 ">
                  <a className="nav-link" href="javascript:void(0)">Contact</a>

                  <div className="container contact_1"> 
                     <ul className="navbar-nav me-auto mt-1 ">

                      <li className="nav-item ms-2 h6 " > 
                        Support
                      </li>

                      <li className="nav-item " > 
                        <a className="nav-link" href="">Help Center</a>
                      </li>

                      <li className="nav-item " > 
                        <a className="nav-link" href="">Community forums </a>
                      </li>

                    </ul> 
                     <ul className="navbar-nav me-auto mt-1 ">

                      <li className="nav-item ms-2 h6 " > 
                        Contact Sales
                      </li>

                      <li className="nav-item " > 
                        <a className="nav-link" href="">Email</a>
                      </li>

                      <li className="nav-item " > 
                        <a className="nav-link" href="">+1 855-237-6726</a>
                      </li>
                    </ul>

                    
                  </div>
                </li>

                <li className="nav-item p-1 get_app ">
                  <a className="nav-link" href="javascript:void(0)">Get app</a>

                  <div className="container get_app_1"> 
                     <ul className="navbar-nav me-auto mt-1 ">

                      <li className="nav-item " > 
                        <a className="nav-link" href="">Desktop app</a>
                      </li>

                      <li className="nav-item " > 
                        <a className="nav-link" href="">Mobile app </a>
                      </li>

                    </ul>  
                  </div>
                </li>

                <li className="nav-item p-1">
                  <a className="nav-link" href="">Sign up</a>
                </li>

                <li className="nav-item p-1">
                  <a className="nav-link" href="">Login</a>
                </li>
                </ul>

                <button className="btn btn-primary pe-4 " type="button"><b>Get started</b>
                 <i class="fa fa-long-arrow-right ps-3" aria-hidden="true"></i> </button>
              </form>
              
            </div>
          </div>
</nav>

       </>
    );
}



export default Navbar;