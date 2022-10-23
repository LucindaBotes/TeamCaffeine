#include <Inventory/SuppliesIterator.h>

using namespace std;

template <typename T>
SuppliesIterator<T>::SuppliesIterator() {
  this->member = 0;
}

template <typename T>
SuppliesIterator<T>::SuppliesIterator(const SuppliesIterator<T> &si) {
  this->member = si.member;
}

template <typename T>
T& SuppliesIterator<T>::operator*() {
  return this->member;
}

template <typename T>
SuppliesIterator<T> SuppliesIterator<T>::operator++() {
  this->member++;
  return *this;
}

template <typename T>
bool SuppliesIterator<T>::operator==(const SuppliesIterator<T> &rhs) const {
  return this->member == rhs.member;
}

template <typename T>
SuppliesIterator<T>::~SuppliesIterator() {
}

// ========================================= Medics.h ==================================================//
// #include <Inventory/MedicNode.h>
// #include <Inventory/MedicsIterator.h>

// friend class MedicsIterator;
// MedicNode *head;
// void enqueue (MedicNode);
// bool isEmpty();
// MedicNode dequeue();
// MedicsIterator<MedicNode> begin();
// MedicsIterator<MedicNode> end();

// ========================================= Medics.cpp ==================================================//
// void Medics::enqueue(MedicNode medicNode){
//   MedicNode * mn = new MedicNode();
//   mn->medic = medicNode;
//   if(isEmpty()){
//     mn->next = mn;
//     mn->previous = mn;
//   }
//   else {
//     mn->next = this->head;
//     mn->previous = this->head->previous;
//     this->head->previous->next = mn;
//     this->head->previous = mn;
//   }
//   this->head = mn;
// }

// MedicNode Medics::dequeue(){
//   if(isEmpty()){
//     return 0;
//   }
//   else if (this->head->previous == this->head){
//     MedicNode * temp = this->head->previous;
//     this->head->previous->next = this->head;
//     return temp->medic;
//   }
// }

// bool Medics::isEmpty(){
//   return this->head == 0;
// }

// MedicsIterator<MedicNode> Medics::begin(){
//   return MedicsIterator<MedicNode>(*this, this->head);
// }

// MedicsIterator<MedicNode> Medics::end(){
//   return MedicsIterator<MedicNode>(*this, this->head->previous);
// }
