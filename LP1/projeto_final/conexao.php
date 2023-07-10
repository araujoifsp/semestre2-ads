<?php
    $conecta = new PDO('mysql:dbname=loja;host=localhost','root','');
    try{
        $conecta->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
    }
    catch(PDOException $e){
        echo 'ERR'.$e->getMessage();
    }
?>