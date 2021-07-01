const express = require('express')
const app = express()
const rotas = require('./routes')


app.use(express.json()); 
app.use(express.urlencoded({extended: true}));
app.use(rotas)
app.listen(3333,()=>{
    console.log('rodando servidor')
})