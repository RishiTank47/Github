

import React, { useContext, useState } from 'react';

const Theme = {
  Dark: {
    foreground: 'red',
    background: 'yellow',
  },
  light: {
    foreground: 'white',
    background: 'grey',
  },
};

const MyThemeContext = React.createContext(Theme.light);

function UseContext(props) {
  const [currentTheme, setCurrentTheme] = useState(Theme.light);

  const toggleTheme = () => {
    setCurrentTheme(currentTheme === Theme.light ? Theme.Dark : Theme.light);
  };

  return (
    <>
      <div className="container mt-5">
        <div className="row">
          <div className="col">
            <h2 style={{ backgroundColor: currentTheme.background, color: currentTheme.foreground }}>
              Lorem Ipsum is simply dummy text of the printing and typesetting industry.
              Lorem Ipsum has been the industry's standard dummy text ever since the 1500s,
              when an unknown printer took a galley of type and scrambled it to make a type
              specimen book. It has survived not only five centuries, but also the leap into
              electronic typesetting, remaining essentially unchanged.
            </h2>
          </div>
        </div>
        <button className="btn btn-primary" onClick={toggleTheme}>
          Click Me
        </button>
      </div>
    </>
  );
}




export default UseContext;