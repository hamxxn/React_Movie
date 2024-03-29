import React from 'react';
import ReactDOM from 'react-dom/client';
import App from './App';
import Movie from './components/Movie';
import Home from './routes/Home';
import Detail from './routes/Detail';
import { BrowserRouter } from 'react-router-dom';

const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(
    <App />
);

