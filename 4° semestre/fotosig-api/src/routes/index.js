const express = require('express');
const rotaProduto = require('./produto.routes')

const rotas = express.Router()
rotas.use('/produtos', rotaProduto);