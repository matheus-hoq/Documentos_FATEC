module.exports = {
    async adicionar(req, res){
        const {nome} = req.body
        return res.json(nome)
    }
}