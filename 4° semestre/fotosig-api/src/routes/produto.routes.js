const express = require('express');
const ProdutoController = require('../controllers/ProdutoController')
const rotaProduto = express.Router()

rotaProduto.post('/', ProdutoController);

module.exports = rotaProduto;