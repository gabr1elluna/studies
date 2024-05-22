const express = require("express");
const app = express();

app.get('/hello',(req,res)=>{
    res.json({Hello:"World"});
})


app.listen(3030,() => {
    console.log("Server running on port 3030");
})
