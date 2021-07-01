const Knex = require('knex')

exports.up = function(knex) {
    return knex.schema.createTable("cat_categoria", function(table){
        table.integer('cat_codigo').primary()
        table.string('cat_descricao', 45)        
    })    
};

exports.down = function(knex) {
    return knex.schema.dropTable("cat_categoria")
};
