import PropTypes from "prop-types";
import { Link } from "react-router-dom";

function Movie({id,uploaded,coverImg,title,summary,genres}){
  return (
  <div style={{
    width: "350px",
    backgroundColor: "white",
    height: "400px",
    position: "relative",
    display: "flex",
    justifyContent: "space-between",
    padding:"30px",
    boxShadow: "rgba(100, 100, 111, 0.2) 0px 7px 29px 0px",
  }}>
    <img style={{
      left: "10px",
      top: "-20px",
      position: "absolute",
      width:"150px",
      height: "200px",
      boxShadow: "rgba(100, 100, 111, 0.2) 0px 7px 29px 0px",
    }} src={coverImg} alt={title}/>
    <div style={{
      marginLeft: "180px",
    }}>
      <h2>
        <Link style={{
          color:"black",
          textDecoration:"none",
        }} to={`/movie/${id}`}>{title}</Link> 
      </h2>
      <span>{uploaded}</span>
      <p style={{
          width:"190px",
          display: "-webkit-box",
          WebkitBoxOrient: "vertical",
          WebkitLineClamp:"8",
          overflow: "hidden",
          textOverflow: "ellipsis",
    
      }}>{summary}</p>
      <div style={{
        display:"flex",
        width:"190px",
        gap:"10px",
        overflow: "hidden",
      }}>
        {genres.map((g)=>
          <span key={g}>{g}</span>)}
        </div>
    </div>
  </div>
  );
}

Movie.propTypes = {
  id: PropTypes.number.isRequired,
  coverImg: PropTypes.string.isRequired,
  title: PropTypes.string.isRequired,
  summary: PropTypes.string.isRequired,
  genres: PropTypes.arrayOf(PropTypes.string).isRequired,
};

export default Movie;