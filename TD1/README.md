# Description des classes




## Classe Account

Variables:
* Client_id (customer_id) : Int 
* Solde  (balance) :  double
* IBAN (iban) : String ou Objet de la classe IBAN (voir page wikipedia IBAN)
* CB : Object de la classe CB
* date creation (creation) : Objet Date

Methodes ou Fonctions Helper
* constructeur ok (with assert)
* Getters ok
* debit ok (method)
* credit ok (method)
* transfert ok (helper function)
* genererIBAN ?
* surcharges d'opérateur << ok
* ?

## Classe Customer: OK

Variables:
* identitiant : int
* nom (lastname) : string
* prenom (firstname) : string
* date de naissance (birthday) : objet de la classe Date
* mot de passe (password) : string
* telephone (phone) : string
* mail (mail) : string
* adresse (address) : Object address


Methodes ou Fonctions Helper
* constructeur
* Getters 
* surcharges d'opérateur <<

## Classe Address : OK

Variables :
* numero (nb) : int
* rue (street) : string
* complement (details) : string
* code postal (zipcode) : int
* ville (city) : string
* 


Methodes ou Fonctions Helper
* constructeur
* Getters 
* surcharges d'opérateur <<


## Classe CB: OK
Variables:
* numero : long int
* date: Objet Date (attention a modifier pour utiliser annee / mois)
* crypto : int
* client : string
* type : class enum

Methodes ou Fonctions Helper
* constructeur avec test de validité sur numero et crypto
* Getters 
* surcharges d'opérateur <<

## Doc git
Voir https://git-scm.com ou https://www.atlassian.com/fr/git




