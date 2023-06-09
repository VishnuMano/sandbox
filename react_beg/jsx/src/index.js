import React from "react";
import ReactDOM from "react-dom/client";

const el = document.getElementById("root");

const Root = ReactDOM.createRoot(el);

function App() {
  const date = new Date();
  const time = date.toLocaleTimeString();
  return <h1>{time}</h1>;
}

Root.render(<App />);
