const Knex = require('knex')

exports.up = function(knex) {
    return knex.schema.createTable("for_fornecedor", function(table){
        table.integer('for_id').primary()
        table.integer('pro_codigo')
        table.foreign('pro_codigo').references('pro_codigo').inTable('pro_produtos')
    })    
};

exports.down = function(knex) {
    return knex.schema.dropTable("for_fornecedor")
};
