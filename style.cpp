*{
    padding: 0;
    margin: 0;
    box-sizing: border-box;
    font-family:  sans-serif;
}
 header{
    width: 100%;
    height: 100vh;
}

html{
    scroll-behavior: smooth;
}  
nav{
    width: 100%;
    height: 70px;
    border-bottom: 1px solid gray;
    box-shadow: 2px 0px 5px gray;
    display: flex;
    justify-content: space-around;
    align-items: center;
}
.logo{
    font-size: 50px;
    font-weight: bold;
}

.menu a{
    text-decoration: none;
    font-size: 20px;
    color:blue ;
    padding: 10px 20px;
    margin: 5px;
    font-weight:bold ;
}
.menu a:last-child{
    background: black;
    color: white;
    
}
.container {
display: flex;
justify-content: center;
align-items: center;
transform-style: preserve-3d;
transform-origin: center;
perspective: 2000px;
}
.left{
flex-basis: 50%;
animation: animate 3s linear infinite;
}

@keyframes animate{
    0%{
        transform: scale(1.1);
    }
    50%{
        transform: scale(1);
    }
    100%{
        transform: scale(1.1);
    }
}
.right{
flex-basis: 50%;
max-width: 400px;
margin-left: 100px;
}
.right h1{
font-size: 50px;
}
.right p{
font-size: 25px;
margin:20px 0px;
}
button{
    background: black;
    color: white;
    font-weight: bold;
    border: none;
    outline: none;
    padding: 10px 20px;
    margin-bottom: 20px;
}
#featured{
    padding: 50px 0px;
    font-size: 50px;
    text-align: center;
}


.wrapper{
    display: grid;
    grid-template-columns: repeat(4,20%);
    grid-auto-rows: minmax(200px,auto);
    grid-gap: 1em;
    justify-content: center;
}
.wrapper>div{
    border: 1px solid gray;
    position: relative;
}

.wrapper> div img{
    width: 100%;
    overflow: hidden;
}

.box1{
    grid-row:1/3;
    grid-column: 1/3;
}

.price{
    position: absolute;
    top: 0;
    left: 0;
    background: black;
    color: white;
    padding: 5px;
    font-size: 20px;
}
.wrapper> div img:hover{
    transform: scale(1.2);
    transition: 0.4s linear;
}

#man{
    padding: 80px 0px;
}

.man-row{
    display: flex;
    justify-content: space-around;
    align-items: center;
}
.man-box{
    flex-basis: 15%;
    box-shadow:  2px 3px 5px gray;
    padding: 10px;
    text-align: center;
}

.man-box img{
    width: 100%;
}
.man-box h2{
    margin: 20px 0px;
}
.man-box h3{
    background: black;
    color: white;
    padding: 10px;
}
.man-box:hover{
    transform: translateY(-20px);
    transition: 0.4s ease;
}
man{
    padding: 80px 0px;
}

.man-row{
    display: flex;
    justify-content: space-around;
    align-items: center;
}
.women-box{
    flex-basis: 15%;
    box-shadow:  2px 3px 5px gray;
    padding: 10px;
    text-align: center;
}

.women-box img{
    width: 100%;
}
.women-box h2{
    margin: 20px 0px;
}
.women-box h3{
    background: black;
    color: white;
    padding: 10px;
}
.women-box:hover{
    transform: translateY(-20px);
    transition: 0.4s ease;
}
#footer{
    display: flex;
    justify-content: space-around;
    align-items: center;
    background: black;
    color: white;
    padding: 10px;
}








