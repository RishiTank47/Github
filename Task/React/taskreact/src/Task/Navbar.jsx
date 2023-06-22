import DataInTable from './DataInTable'
import StopWatch from './StopWatch';
import UseContext from './UseContext'
import stopwatch_2 from './stopwatch_2';
import {
    BrowserRouter as Router,
    Routes,
    Route,
    Link,
} from "react-router-dom";
// import API from './03API'; 

function Navbar(props) {
    const MenuData = {'/DataInTable':'Data In Table','/stopwatch':'StopWatch',
                    '/usecontext':'UseContext','/stopwatch_2':'StopWatch_2'};
    const ResultData = Object.entries(MenuData).map((res,i)=>{
        console.log(i);
        return <li className="nav-item" key={i}>
        <Link className='nav-link' to={res[0]}>{res[1]}</Link>
    </li>
    }) 
    return (
        <>
        <Router>
            <nav className="navbar navbar-expand-sm bg-dark navbar-dark">
                <div className="container-fluid">
                    <a className="navbar-brand" href="#">Company Name</a>
                    <button className="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#collapsibleNavbar">
                        <span className="navbar-toggler-icon"></span>
                    </button>
                    <div className="collapse navbar-collapse" id="collapsibleNavbar">
                        <ul className="navbar-nav">
                            
                            {ResultData}
                        </ul>
                    </div>
                </div>
            </nav>
            <Routes>
               
                <Route path="/DataInTable" element={<DataInTable/>}></Route>
                <Route path="/stopwatch" element={<StopWatch/>}></Route>
                <Route path="/usecontext" element={<UseContext/>}></Route>
                <Route path="/stopwatch_2" element={<stopwatch_2/>}></Route>
            </Routes>
</Router>
        </>
    );
}

export default Navbar;


// npm i react-router-dom
// rsf => react function component
// <> </> => fragment
