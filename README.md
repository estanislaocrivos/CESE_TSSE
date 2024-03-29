# CESE CO20 - TSSE - Trabajo Práctico Nro. 2 [TDD]

Se aplican técnicas de TDD (Test Driven Development) para el desarrollo de una API para controlar LEDs. Se ejecutan funciones de testing sobre esta API haciendo uso de la herramienta Ceedling.

## Uso del repositorio

Este repositorio usa [pre-commit](https://pre-comit.com) para validaciones de formato, y [ceedling](https://www.throwtheswitch.org/ceedling) para la ejecución de tests.
Para trabajar con el mismo usted debería tener instalado:

1. Instrucciones para instalar [`pre-commit`](https://pre-commit.com/#install)
2. Para instalar `ceedling`:
```
sudo apt install ruby
sudo gem install ceedling
```
3. Después de clonar el repositorio ejecutar el siguiente comando:
```
pre-commit install
```
4. Para compilar el código y correr los tests:
```
ceedling
```
