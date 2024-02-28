import { useEffect, useState } from "react";
import { useParams } from "react-router-dom";

function Detail() {
  const { id } = useParams();
  const [data,setData]=useState({});
  const getMovie = async () => {
    const json = await (
      await fetch(`https://yts.mx/api/v2/movie_details.json?movie_id=${id}`)
    ).json();
    console.log(json);
    setData(json.data.movie);
  };
  console.log(data);
  useEffect(() => {
    getMovie();
  }, []);
  return (
    <div style={{
      backgroundColor: "#E0FFFF",
  
    }}>
       <div style={{
        display:"flex",
        justifyContent: "center",
       }}>
        <img style={{
           marginTop: "40px",
           marginBlock:"140px",
        }} src={data.background_image_original}/>
      </div>
      <div  style={{
        display:"flex",
        justifyContent:"flex-start",
        marginLeft:"220px",
       }}>
        <img style={{
          width : "100px",
          height: "180px"
        }} src={data.large_cover_image}/>
        <div style={{
            marginLeft:"20px"
          }}>
          <h3>{data.title}</h3>
          <div>
            <span style={{
              marginRight: "5px",
            }}>{data.year}년</span>
            <span style={{
              marginRight: "5px",
            }}>*</span>
            <span>{data.runtime}분</span>
          </div>
        </div>
        
      </div>
      <div style={{
        marginLeft:"365px",
      }}>
        <span style={{
              marginRight: "25px",
            }}>rate: {data.rating}</span>
        <span style={{
              marginRight: "25px",
            }}>slug: {data.slug}</span>
        <span>like: {data.like_count}</span>
      </div>
      <p style={{
        width:"70.9%",
        marginLeft:"200px",
      }}>{data.description_full}</p>
    </div>

 
  
  );
}

export default Detail;