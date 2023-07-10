<?php
    include_once('header.php');
    require_once 'conexao.php';

    $codigo = $_GET['id'];

    $selecao=$conecta->prepare("SELECT * FROM cliente where id='$codigo'");
    $selecao->execute();

    $registro = $selecao->fetch(PDO::FETCH_ASSOC);

    $nome = $registro['nome'];
    $email = $registro['email'];
    $fone = $registro['fone'];

?>

<form action="altera_cliente_ac.php" method="POST">
        <h1>Atualizar Cadastro</h1>
        <div>
            Nome Completo: <br><input type="text" name="new_nome"  required value="<?php echo($nome);?>"><br>
            Telefone: <br><input type="text" name="new_fone" required value="<?php echo($fone);?>"><br>
            E-mail: <br><input type="email" name="new_email" required value="<?php echo($email);?>"><br>
            <input type="submit" name="enviar" id="envia" value="Atualizar">
        </div>
            
    </form>
<?php
    include_once('footer.php');
?>