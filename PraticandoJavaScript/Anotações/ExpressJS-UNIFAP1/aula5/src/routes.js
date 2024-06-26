const { Router } = require("express");
const UsuarioController = require("./Controllers/UsuarioController");
const router = Router();

router.post("/criarUsuario", UsuarioController.criarUsuario);
router.get(`/buscarUsuario/:id`, UsuarioController.buscarUsuario)
router.get(`/buscarUsuarios`, UsuarioController.buscarUsuarios)
router.put(`/atualizarUsuario/:id`, UsuarioController.atualizarUsuario)
router.delete(`/deletarUsuario/:id`, UsuarioController.deletarUsuario)

module.exports = { router };
