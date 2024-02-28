import { useEffect, useState } from 'react';
import Movie from '../components/Movie';

function Home() {
  const[loading, setloading]=useState(true);
  const [movies,setMovies]=useState([]);
  const getMovies = async()=>{
    const response=await fetch(`https://yts.mx/api/v2/list_movies.json?minimum_rating=9&sort_by=year`
    );
    const json= await response.json();
    setMovies(json.data.movies);
    setloading(false);
  };
  useEffect(()=>{
    getMovies();
  },[]);
  console.log(movies);
  return (<div>
    {loading? (<h1>Loading..</h1>)
    :(
      <div style={{
        display: "grid",
        gridTemplateColumns: "1fr 1fr",
        padding: "100px",
        rowGap: "200px",
        columnGap:"100px",
        backgroundColor: "#EEF5FF",
      }}>{
        movies.map((movie)=>(
          <Movie 
          key={movie.id}
          id={movie.id}
          uploaded={movie.date_uploaded}
          coverImg={movie.medium_cover_image} 
          title={movie.title} 
          summary={movie.summary} 
          genres={movie.genres}
          />
        ))}
        </div>
        )}
    </div>
  );
}
export default Home;