const knexfile = require('../../knexfile')
const Knex = require('knex')(knexfile.development)

module.exports = Knex