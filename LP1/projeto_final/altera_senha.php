<?php
    include_once("header.php");
    $id = $_GET['id'];

?>
    <form action="altera_senha_ac.php?id=<?php echo($id); ?>" method="POST">
        Senha Atual<br>
        <input type="password" name="senha"><br>
        Nova Senha
        <input type="password" name="new_senha"><br>
        Confirmar Nova Senha
        <input type="password" name="new_senha1"><br>
        <input type="submit">
    </form>
<?php
    include_once("footer.php");
?>